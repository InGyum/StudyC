/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 parson 사용
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - 김인겸.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parson.h"
void read_json(void)
{
    JSON_Value* rootValue;
    JSON_Object* rootOject;

    rootValue = json_parse_file("package.json");
    rootOject = json_value_get_object(rootValue);

    //사용처리 부분 코딩
    printf("name : %s\n", json_object_get_string(rootOject, "name"));
    printf("version : %s\n", json_object_get_string(rootOject, "version"));
    printf("repo : %s\n", json_object_get_string(rootOject, "repo"));
    printf("description : %s\n", json_object_get_string(rootOject, "description"));

    JSON_Array* array = json_object_get_array(rootOject, "keywords");
    printf("keywords : \n");
    for (int i = 0; i < json_array_get_count(array); i++)
    {
        printf("  %s\n", json_array_get_string(array, i));
    }

    printf("license : %s\n", json_object_get_string(rootOject, "license"));
    printf("temp : %.1lf\n", (double)json_object_get_number(rootOject, "temp"));
    array = json_object_get_array(rootOject, "src");
    printf("src : \n");
    for (int i = 0; i < json_array_get_count(array); i++)
    {
        printf("  %s\n", json_array_get_string(array, i));
    }

    json_value_free(rootValue);

}



void write_json(void)
{
    JSON_Value* rootValue;
    JSON_Object* rootOject;

    rootValue = json_value_init_object();
    rootOject = json_value_get_object(rootValue);

    //사용
    json_object_set_string(rootOject, "Tittle", "Interstellar");
    json_object_set_number(rootOject, "Year", 2014);
    json_object_set_number(rootOject, "Runtime", 169);

    json_object_set_string(rootOject, "Genre", "Sci-Fi");
    json_object_set_string(rootOject, "Director", "Christopher Nolan");

    json_object_set_value(rootOject, "Actors", json_value_init_array());

    JSON_Array* actors = json_object_get_array(rootOject, "Actors");

    json_array_append_string(actors, "Matthew McConaughey");
    json_array_append_string(actors, "Anne Hathaway");
    json_array_append_string(actors, "Michael Cine");
    json_array_append_string(actors, "Jessica Chastain");
    json_array_append_string(actors, "Casey Affleck");

    json_object_set_boolean(rootOject, "KoreaRelease", 1);

    json_serialize_to_file_pretty(rootValue, "saved.json");
    json_value_free(rootValue);
}

    

   

int main(void)
{
    write_json();

    system("pause");
    return EXIT_SUCCESS;
}