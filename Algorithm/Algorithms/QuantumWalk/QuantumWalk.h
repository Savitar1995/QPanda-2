/*
Copyright (c) 2017-2018 Origin Quantum Computing. All Right Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
//Bernstein Vazirani Algorithm: f(x)=ax+b mod 2;
//                            a,x:{0,1}^n,b:{0,1}
//questions: find a and b;
#ifndef QUANTUMWALK_H
#define QUANTUMWALK_H

#include "QPanda.h"
#include "QAlgorithm.h"

void QuantumWalk(int );

//QProg BV_Algorithm(vector<Qubit*> qVec, vector<CBit*> cVec,vector<bool> & ,bool );

QProg quantumWalk(vector<Qubit*> qVec, vector<Qubit*> cVec);
QCircuit walkOneStep(vector<Qubit*> qVec);
#endif