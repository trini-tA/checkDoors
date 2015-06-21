/**
@trini-tA
@21/06/2015



**/
#include <wiringPi.h>
#include <stdio.h>
#include <unistd.h>

#define LED_STATUS 7
#define CTRL_IN_DOOR 1

int main(){
	
	printf ( "Start check Door prog!\n" );

	wiringPiSetup();
	
	pinMode( LED_STATUS, OUTPUT );
	pinMode( CTRL_IN_DOOR, INPUT );

	for(;;){
		
		if( digitalRead( CTRL_IN_DOOR ) == 1 ){
			digitalWrite( LED_STATUS, LOW );
		} else {
			digitalWrite( LED_STATUS, HIGH );
		}
	}

	return 0;	

}
