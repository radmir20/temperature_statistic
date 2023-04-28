#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	vector<double> temps; // Температуры
	for (double temp; cin >> temp; ) // Чткние в temp
		temps.push_back(temp); //  вносим temp в vector
	
	
	// Вычисление средней температуры
	double sum = 0;
	for (int x: temps) sum += x;
	cout << "Middle temperature: "
		<< sum/temps.size() << '\n';
		
	// Вычисление медианы
	sort(temps.begin(), temps.end()); //  Сортировка вектора температуры
	cout << "Median temperature: "
		<< temps[temps.size()/2] << '\n';
	
}b