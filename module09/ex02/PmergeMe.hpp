/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:35:20 by castorga          #+#    #+#             */
/*   Updated: 2024/10/29 12:35:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

// template<typename T>
// class FordJohnson {
// 	private:
// 		static void insert(std::vector<T>& arr, int from, int to) {
// 			T temp = arr[from];
// 			for (int i = from; i > to; i--)
// 				arr[i] = arr[i - 1];
// 			arr[to] = temp;
// 		}

// 		static int binarySearch(const std::vector<T>& arr, const T& item, int low, int high) {
// 			if (high <= low)
// 				return (item > arr[low]) ? (low + 1) : low;
// 			int mid = (low + high) / 2;
// 			if (item == arr[mid])
// 				return mid + 1;
// 			if (item > arr[mid])
// 				return binarySearch(arr, item, mid + 1, high);
// 			return binarySearch(arr, item, low, mid - 1);
// 		}

// 		static std::vector<int> generateJacobsthalSequence(int n) {
// 			std::vector<int> jacobsthal;
// 			jacobsthal.push_back(0);
// 			jacobsthal.push_back(1);
// 			while (jacobsthal.back() < n) {
// 				int next = jacobsthal[jacobsthal.size() - 1] + 2 * jacobsthal[jacobsthal.size() - 2];
// 				jacobsthal.push_back(next);
// 			}
// 			return jacobsthal;
// 		}

// 	public:
// 		static void sort(std::vector<T>& arr) {
// 			if (arr.size() <= 1) return;

// 			// Paso 1: Emparejar y comparar
// 			for (size_t i = 0; i < arr.size() - 1; i += 2) {
// 				if (arr[i] > arr[i + 1]) {
// 					std::swap(arr[i], arr[i + 1]);
// 				}
// 			}

// 			// Paso 2: Ordenar recursivamente los elementos mayores
// 			std::vector<T> larger;
// 			for (size_t i = 1; i < arr.size(); i += 2) {
// 				larger.push_back(arr[i]);
// 			}
// 			sort(larger);

// 			// Paso 3: Formar la cadena principal
// 			std::vector<T> mainChain = larger;

// 			// Paso 4: Insertar los elementos restantes
// 			std::vector<T> pend;
// 			for (size_t i = 0; i < arr.size(); i += 2) {
// 				pend.push_back(arr[i]);
// 			}

// 			// Generar secuencia de Jacobsthal
// 			std::vector<int> jacobsthal = generateJacobsthalSequence(pend.size());

// 			// Insertar elementos usando la secuencia de Jacobsthal
// 			size_t insertIndex = 0;
// 			for (size_t i = 1; insertIndex < pend.size(); i++) {
// 				while (insertIndex < static_cast<size_t>(jacobsthal[i]) && insertIndex < pend.size()) {
// 					int pos = binarySearch(mainChain, pend[insertIndex], 0, mainChain.size());
// 					mainChain.insert(mainChain.begin() + pos, pend[insertIndex]);
// 					insertIndex++;
// 				}
// 			}

// 			// Copiar la cadena ordenada de vuelta al arreglo original
// 			arr = mainChain;
// 		}
// };

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
bool checkNumbers(int argc, char *argv[]);
std::vector<unsigned int> saveInVector(int argc, char *argv[]);
