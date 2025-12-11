#include <stdio.h>

int main() {
    int path,choice, bridge,chest,answer,flag;
    flag=0;
    scanf("%d",&path);
    if(path==1){
       printf("Player chooses the Left path.\n");
        scanf("%d", &choice);
        if (choice==1) {
            printf("Poor choice, Game Over!");
        }
        else if (choice==2) {
            printf("Player found a bridge.\n");

            scanf("%d", &bridge);

            if (bridge==1) {
                printf("Player crosses the bridge safely.\n");
                flag=1;
            } 
            else {
                printf("Poor luck, Game Over!");
            }
        }
 
    }
    if(path==2){
        printf("Player chooses the Middle path.\n");
        scanf("%d", &answer);
        if (answer == 582) {
            printf("Player solved the puzzle.\n");
            flag=1;
        } 
        else {
            printf("Foolish player, Game Over!");
        }
    }
    if(path==3){
        printf("Player chooses the Right path.\n");
        scanf("%d", &answer);
        if (answer == 30) {
            printf("Player solved the puzzle.\n");
            flag=1;
        } else {
            printf("Foolish player, Game Over!");
        }

    }
    if(flag==1){
        scanf("%d", &chest);
        if (chest == 1) {
            printf("All that glitters is not gold, Game Over!");
        } 
        else if (chest == 2) {
            printf("All your efforts were for nothing, Game Over!");
        } 
        else if (chest == 3) {
            printf("Congratulations!! You won the treasure.");
        }
    }
        
    
       
    return 0;
}
