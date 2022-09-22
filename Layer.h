//
// Created by Sixtium on 2022-09-22.
//

#ifndef CPP_NEURAL_NETWORK_LAYER_H
#define CPP_NEURAL_NETWORK_LAYER_H


class Layer {
    private:
        double inputs, outputs;
        double weights[0]; // Weights for incoming nodes
        double biases[0]; // Biases for each node in layer

    public:
        Layer(int inputs, int outputs);
        ~Layer();
        double* calculateOutputs(const double inputs[]);
};


#endif //CPP_NEURAL_NETWORK_LAYER_H
