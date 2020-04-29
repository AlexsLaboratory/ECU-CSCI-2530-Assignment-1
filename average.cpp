// CSCI 2530
// Assignment: 1
// Author:     Alex Lowe
// File:       average.cpp
// Tab stops:  none

//=======================================================
// This program does two main steps.
//
// 1. It reads 3 integers and writes their median.
//
// 2. After that, it reads integers until it reads -1.
//    Then it writes the mean of those integers, excluding
//    -1.
//
// For example, if the input is
//   3 8 2 10 11 15 -1
// then the output is:
//
// The median of (3, 8, 2) is 3.
// The mean of (10, 11, 15) is 12.00
//=======================================================
#include <string>
#include <iostream>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i = 0;
  int num;

//  Variables for mean
  string mean = "(";
  int sum = 0;
  int numNumbers = 0;

//  Variables for median
  string median = "(";
  vector <int> medianArray;

  while (scanf("%i", &num) == 1 && num != -1)
  {
    if (i <= 2)
    {
      medianArray.push_back(num);
      if (i == 0)
      {
        median.append(to_string(num));
      }
      else
      {
        median.append(", " + to_string(num));
      }
    }
    else
    {
      sum = sum + num;
      if (numNumbers == 0)
      {
        mean.append(to_string(num));
      }
      else
      {
        mean.append(", " + to_string(num));
      }
      ++numNumbers;
    }
    ++i;
  }
  median.append(")");
  mean.append(")");
  sort(medianArray.begin(), medianArray.end());
  printf("The median of %s is %i\n", median.c_str(), medianArray.at(1));
  printf("The mean of %s is %0.2lf\n", mean.c_str(), (double) sum/numNumbers);
  cout << "The mean is: " << median << endl;
  return 0;
}