#ifndef PIC_H
#define PIC_H
#define Map_Height 40
#define Map_Width 150
const char StartPic[Map_Height][Map_Width+1]={
"                                                                                                                                                     ",
"                       *                                                                                                                             ",
"                       **                                                                                                                            ",
"                       *1*                                                                                                                           ",
"                       *11*                                                                                                                          ",
"                       *111*                                                                               ********************                      ",
"                       **111*                                                                          ************************1                     ",
"                       ***111*                                                                      ***************************11                    ",
"                       ****111*                                                                    ****************************111                   ",
"                       *****11*******************                                                 *****************************1111                  ",
"                       ***************************                                                ****************************111111                 ",
"                       ****************************                                               ****************************1111111                ",
"                      ******************************                                              ***************************111111111               ",
"                    *********************************                                            *******1111*****************1111111111              ",
"                   ***********************************                                           *******1111****************111111111111             ",
"                 **********************111**************                                         *******1111****************1111111111111            ",
"                ************************1111*************                                        ***************************11111111111111           ",
"               **************************1111*************                                      ****************************111111111111111          ",
"               ***************************111*************                                      ***************************11111111111111111         ",
"              ******************************1**************                                     **************************111111111111111111         ",
"              ********************************************111                         111   ******************************11111111111111111          ",
"              ********************************************111                         111*********************************111111111111111            ",
"              ***********************11111111111**********111                         111***********************************111111111                ",
"              ******************************111************                           *****************************************                      ",
"               ***************************1*1*************                            *****************************************                      ",
"               *************************1**1**************                            *****************************************                      ",
"                **********************1***1**************                              ****************************************                      ",
"                 ************************1**########**** ###    ######## ######## ##     **########****************************                      ",
"                  **************************##*****##** ## ##      ##       ##    ##       ##*********************************                       ",
"                   *************************##*****##* ##   ##     ##       ##    ##       ## ******************************                         ",
"                     ***********************########  ##     ##    ##       ##    ##       ###### ************************                           ",
"                        ********************##***  ## #########    ##       ##    ##       ##       ********************                             ",
"                            ****************##     ## ##     ##    ##       ##    ##       ##         ***************                                ",
"                                **********  ########  ##     ##    ##       ##    ######## ########      **********                                  ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     "
};
const char LostPic[Map_Height][Map_Width+1]={
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                            ******       ***     **     **  ********      *******   **     **  ********  ********    **                              ",
"                           **    **     ** **    ***    **  **           **     **  **     **  **        **     **   **                              ",
"                           **          **   **   ****  ***  **           **     **  **     **  **        **     **   **                              ",
"                           **   ****  **     **  ** *** **  ******       **     **  **     **  ******    ********    **                              ",
"                           **    **   *********  **  *  **  **           **     **   **   **   **        **   **     **                              ",
"                           **    **   **     **  **     **  **           **     **    ** **    **        **    **                                    ",
"                            ******    **     **  **     **  ********      *******      ***     ********  **     **   **                              ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     "
};
const char WinPic[Map_Height][Map_Width+1]={
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                           **      **  ****  **    **  **                                                            ",
"                                                           **  **  **   **   ***   **  **                                                            ",
"                                                           **  **  **   **   ****  **  **                                                            ",
"                                                           **  **  **   **   ** ** **  **                                                            ",
"                                                           **  **  **   **   **  ****  **                                                            ",
"                                                           **  **  **   **   **   ***                                                                ",
"                                                            ***  ***   ****  **    **  **                                                            ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     "
};
const char WarningPic[Map_Height][Map_Width+1]={
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                             **      **    ***    ********  **    ** **** **    **  ******                                           ",
"                                             **  **  **   ** **   **     ** ***   **  **  ***   ** **    **                                          ",
"                                             **  **  **  **   **  **     ** ****  **  **  ****  ** **                                                ",
"                                             **  **  ** **     ** ********  ** ** **  **  ** ** ** **   ****                                         ",
"                                             **  **  ** ********* **   **   **  ****  **  **  **** **    **                                          ",
"                                             **  **  ** **     ** **    **  **   ***  **  **   *** **    **                                          ",
"                                              ***  ***  **     ** **     ** **    ** **** **    **  ******                                           ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                            Cat and Dog are at it again!                                                             ",
"                                                                                                                                                     ",
"                                   It's a windy day and they are throwing stuff at each other until one of them gives up,                            ",
"                                                                                                                                                     ",
"                                                      Who's gonna be the winner on this battle?                                                      ",
"                                                                                                                                                     ",
"                                                 Input a force number carefully and try to win the game!                                             ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     "
};
const char GamePic[Map_Height][Map_Width+1]={
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
};
const char EndPic[Map_Height][Map_Width+1]={
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
"                                                                                                                                                     ",
};





#endif

