#include <iostream>
#include "E101.h"

using namespace std;


int main(){
  int err;
  cout<<" Hello"<<endl;
  err = init(0);
  cout<<"After init() error="<<err<<endl;
  
  int count = 0;
  open_screen_stream();
  while(count < 500)
  {
	 
	 set_motors(1,47);  //right_motor, 30 = forwards
	 set_motors(2,38);
	 set_motors(3,45);
	 set_motors(4,52);
	 set_motors(5,48);	//left_motor, 30 = backwards
     set_digital(0,1);
	 set_digital(1,1);
	 set_digital(2,1);
	 set_digital(3,1);
	 set_digital(4,1);
	 hardware_exchange();
	 take_picture();
	 update_screen();
	 //sleep1(10);
     set_digital(0,0);
	 set_digital(1,0);
	 set_digital(2,0);
	 set_digital(3,0);
	 set_digital(4,0);
	 hardware_exchange();
	// take_picture();
	 update_screen();
	 
	 int y = 120;
	 int x = 0;
	 int whiteness = 0;
	 //int black = 0;
	 //int totblack = 0;
	 
	 while (x < 320){
		 int whiteness = get_pixel(y, x, 3);
		 //int black = get_pixel(y, x, 0);
		 x++; 
		 //if(((float)whiteness)){
					//totblack++;
		 printf("whiteness\n");
		 //printf("black\n");
		 //printf("totblack\n");
		 
		 
		 }
	 
	 //char fname[5]={'r','r','r','r','r'};
	 //save_picture(fname);
	 //display_picture(0,200000);
	 	
	 //sleep1(1,200);
       count++;
    }
    //save_picture("file1");
    close_screen_stream();
    stoph();
	
	return 0;
}
}
