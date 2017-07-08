/*
 ============================================================================
 Name        : 06_11.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Celsius, Fahrenheit, Kelvin calculations
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

const double boilingCelsius = 100.0;
const double freezingCelsius = 0.0;

int main(void){
	double boilingFahrenheit = boilingCelsius * 9/5 + 32.0;
	double freezingFahrenheit = freezingCelsius * 9/5 + 32.0;
	double boilingKelvin = boilingCelsius + 273.0;
	double freezingKelvin = freezingCelsius + 273.0;

	printf("Water boils at %.1f degrees Fahrenheit and freezes at %.1f degrees Fahrenheit\n",boilingFahrenheit, freezingFahrenheit);
	printf("Water boils at %.1f degrees Kelvin and freezes at %.1f Kelvins\n",boilingKelvin, freezingKelvin);
}
