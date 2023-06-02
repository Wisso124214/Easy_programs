#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void printHead();
void printNeck();
void printArm1();
void printArm2();	
void printBody();
void printLeg1();
void printLeg2();
void printFace();


int main(){
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	printHead();
	system("pause>nul");
	
	printNeck();
	system("pause>nul");
	
	printBody();
	system("pause>nul");

	system("cls");
	printHead();
	printNeck();
	printArm1();
	system("pause>nul");
	
	system("cls");
	printHead();
	printNeck();
	printArm2();
	system("pause>nul");
	
	printLeg1();
	system("pause>nul");
	
	
	system("cls");
	printHead();
	printNeck();
	printArm2();
	printLeg2();
	system("pause>nul");
	
	
	system("cls");
	printFace();
	printNeck();
	printArm2();
	printLeg2();
	system("pause>nul");

			
	return 0;

}

void printHead(){
	
	printf("\n       _________\n      /         \\ \n     /           \\ \n    |             | \n    |             |\n     \\           / \n      \\_________/");
	
	return;
}

void printNeck(){
	
	printf("\n           |\n           |");
	
	return;
}

void printArm1(){
	
	printf("\n          /| \n         / |\n        /  |\n       /   |\n      /    |\n           |");
	
	return;
}

void printArm2(){
	
	printf("\n          /|\\ \n         / | \\ \n        /  |  \\ \n       /   |   \\ \n      /    |    \\ \n           |");
	
	return;
}

void printBody(){
	
	printf("\n           |\n           |\n           |\n           |\n           |\n           |");
	
	return;
}

void printLeg1(){
	
	printf("\n          /\n         /\n        /\n       /\n      /");
	
	return;
}

void printLeg2(){
	
	printf("\n          / \\ \n         /   \\ \n        /     \\ \n       /       \\ \n      /         \\");
	
	return;
}

void printFace(){
	
	printf("\n       _________\n      /         \\ \n     /           \\ \n    |    X   X    | \n    |             |\n     \\    ___    / \n      \\_________/");
	
	return;
}
