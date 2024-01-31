#include <iostream>
//works in Visual Studio 2022
//Decorations and colors are random each time you run the program

                                      //
                                    const
                                  char*D[]
                                 ={"O","o"};
                              const char*C[]={
                           "\x1B[31m","\x1B[33m",
                                 "\x1B[34m",
                            "\x1B[35m","\x1B[36m",
                        "\x1B[37m"};const char*T[]={
                      "*","*","*","*","+",".","x"};void
                    f(int a,int b){for(int i=0;i<b-a/2;++i
                ){std::cout<<" ";}for(int i=0;i<a;++i){if(rand()
              <11000){std::cout<<C[rand()%6]<<D[rand()%2];}else{std::
                     cout<<"\x1B[32m"<< T[rand() % 7];}}std::
                  cout<<std::endl;}int main(){int a=3;int b=1;for
              (int i= 0;i<4;++i){for(int j=0;j<a;++j){f(b,12);b+=2;}
          b-=1*2+2;a+=1;}std::cout<<C[1];for(int i=0;i<3;++i){for(int j=0;
        j<10;++j){std::cout << " ";}for(int j=0;j<4;++j){std::cout << "#";}
                                 std::cout<< 
                                 std::endl;}
                                 std::cout<<
                                 "\033[0m";}
