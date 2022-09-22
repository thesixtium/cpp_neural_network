//
// Created by Sixtium on 2022-09-22.
//

#ifndef CPP_NEURAL_NETWORK_NEURALNETWORK_H
#define CPP_NEURAL_NETWORK_NEURALNETWORK_H


class NeuralNetwork {
    private:
        Layer layers[0];
        int number_of_layers;
    public:
        NeuralNetwork(int number_of_layers, int * layerSizes);
        ~NeuralNetwork();
        double* CalculateOutputs(double* inputs);
        int Classify(double* inputs);

};


#endif //CPP_NEURAL_NETWORK_NEURALNETWORK_H
