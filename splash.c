include <stdio.h>

int main(){
    char name#i[50];
    char date[20];

    printf("현재 날짜를 'yyyy-mm-dd' 형식으로 입력하세요: ");
    scanf("%s", date);
    printf("당신의 이름을 입력하세요: ");
    scanf("%s", name);

    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("[마그레타이 ver 0.1]\n");
    printf("풀 한 포기 없는 황무지에서 반짝이는 형성을 만들어내는 곳 마그레타이,\n");
    printf("사람들이 보지 못하는 잠재력을 찾고 전문가의 손길을 더해 보석을 빚는 곳,\n");
    printf("마그레타이에 오신 걸 환영합니다.\n\n");
    printf("[사용자]: %s\t\t\t[실행시간]:%s\n", name,date);
    printf("=====================================================\n");

    return 0;
}