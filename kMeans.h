#ifndef KMEANS_H_
#define KMEANS_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

void importTXT(std::ifstream&, std::vector<std::vector<double> >&);
void importCSV(std::ifstream&, std::vector<std::vector<double> >&);
void printData(std::vector<std::vector<double> >, std::vector<int>);
void printData(std::vector<std::vector<double> >);
double euclideanDistance(std::vector<double>, std::vector<double>);
std::vector<std::vector<double> > initializeCentroids(std::vector<std::vector<double> >, int);
void clusterData(std::vector<std::vector<double> >, std::vector<std::vector<double> >, std::vector<int>&);

double toDouble(std::string);

#endif /*KMEANS_H_*/