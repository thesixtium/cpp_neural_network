//
// Created by Sixtium on 2022-09-22.
//

#include "NeuralNetwork.h"
#include "Layer.h"

NeuralNetwork::NeuralNetwork(int number_of_layers, int *layerSizes) {
    this->layers = new Layer[number_of_layers - 1];
    this->number_of_layers = number_of_layers;
    for (int i = 0; i < number_of_layers; i++){
        layers[i] = new Layer(layerSizes[i], layerSizes[i + 1]);
    }
}

NeuralNetwork::~NeuralNetwork() {
    free(this->layers);
}

double *NeuralNetwork::CalculateOutputs(double* inputs) {
    for(int i = 0; i < this->number_of_layers; i++){
        inputs = this->layers[i].CalculateOutputs(inputs);
    }
    return inputs;
}

int NeuralNetwork::Classify(double *inputs) {
    double outputs[] = CalculateOutputs(inputs);
    int N = sizeof(outputs) / sizeof(double);
    return distance(outputs, max_element(outputs, outputs + N))
}
