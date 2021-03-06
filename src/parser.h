#ifndef PARSER_H
#define PARSER_H
#include "network.h"

network parse_network_cfg(char *filename);
void save_network(network net, char *filename);
void save_weights(network net, char *filename);
void save_weights_upto(network net, char *filename, int cutoff);
void save_weights_double(network net, char *filename);
void load_weights(network *net, char *filename);
void load_weights_upto(network *net, char *filename, int cutoff);
void save_detections(char *image_id, char* csv_filename, int num, int width, int height, float thresh, box *boxes, float **probs, char **names, int classes);
void save_statistics(const char *framework,const char *csv_filename,const char* model,const char*mode, float mean, float var, int width, int height);

#endif
