//
// Created by Sixtium on 2022-09-22.
//

#include "Layer.h"

Layer::Layer(int inputs, int outputs){
    this->weights = new double [inputs];
    this->biases = new double [outputs];
    this->inputs = inputs;
    this->outputs = outputs;
}

Layer::~Layer(){
    free (this->weights);
    free (this->biases)
}

double[] Layer::calculateOutputs(const double *input_nodes){
    double output_values = new double[this->outputs];

    for(int i = 0; i < this->outputs; i++){
        double node_value = biases[i];
        for(int j = 0; j < this->inputs; j++){
            node_value += input_nodes[j] * weights[j];
        }
        output_values[i] = node_value;
    }

    return output_values;
}
