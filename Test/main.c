/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - 김인겸ㄴ.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    char ch;
    int res;
    while (1)
    {
        printf("C:");
        res = scanf("%c", &ch);
        if (res == -1) { break; }
        
                

        char a[80] = "PC01";
        printf("호스트 이름 : %s\n", a);
        char b[80] = "Microsoft Windows 10 Pro";
        printf("OS 이름 :     %s\n", b);
        char c[80] = "10.0.18363 N/A 빌드 18363";
        printf("OS 버전 : %s\n", c);
        /*   printf("OS 제조업체 : %s\n");
           printf("OS 구성 : %s\n");
           printf("OS 빌드 종류 : %s\n");
           printf("등록된 소유자 : %s\n");
           printf("등록된 조직 : %s\n");
           printf("제품 ID : %s\n");
           printf("원래 설치 날짜 : %s\n");
           printf("시스템 부트 시간 : %s\n");
           printf("시스템 제조업체 : %s\n");
           printf("시스템 모델 : %s\n");
           printf("시스템 종류 : %s\n");
           printf("프로세서 : %s\n");
           printf("          ");
           printf("BIOS 버전 : %s\n");
           printf("Windows 디렉터리 : %s\n");
           printf("시스템 디렉터리 : %s\n");
           printf("부팅 장치 : %s\n");
           printf("시스템 로캘 : %s\n");
           printf("입력 로캘 : %s\n");
           printf("표준 시간대 : %s\n");
           printf("총 실제 메모리 : %s\n");
           printf("사용 가능한 실제 메모리 : %s\n");
           printf("가상 메모리 : 최대 크기 : %s\n");
           printf("가상 메모리 : 사용 가능 : %s\n");
           printf("가상 메모리 : 사용 중 : %s\n");
           printf("페이지 파일 위치 : %s\n");
           printf("도메인 : %s\n");
           printf("로그온 서버 : %s\n");
           printf("핫픽스 : %s\n");
           */

    }


    // type here.
	system("pause");
	return EXIT_SUCCESS;
}