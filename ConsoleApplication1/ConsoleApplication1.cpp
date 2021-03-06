// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NeuralNetwork.h"

int main()
{
	NeuralNetwork n; //Initialize Neural Network variable

	n.GenerateRandomFloats(10, n.input); //Generate random floats
	n.OutputArray(n.input);				 //Output array
	n.ConvertSigmoid(n.input);			 //Converts array to sigmoid
	n.OutputArray(n.input);				 //Output array
    return 0;
}