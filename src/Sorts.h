#ifndef ASD2022_L1_COMPLEXITE_SORTS_H
#define ASD2022_L1_COMPLEXITE_SORTS_H
#include <vector>


// BUBBLE SORT
template <typename T>
void bubbleSort(std::vector<T>& v) {
    if (v.size() > 0) {
        bool fini = false;
        size_t taille = v.size();
        while (!fini) {
            fini = true;
            for (size_t i = 0; i < taille - 1; ++i) {
                if (v[i] > v[i + 1]) {
                    swap(v[i], v[i + 1]);
                    fini = false;
                }
            }
            --taille;
        }
    }
}

// INSERTION SORT




// SELECTION SORT
template <typename T>
void selectionSort(std::vector<T>& v) {
    if (v.size() > 0) {
            size_t iMin;
            for (size_t i = 0; i < v.size() - 1; ++i) {
                iMin = i;
                for (size_t j = i + 1; j < v.size(); ++j) {
                    if (v[j] < v[iMin])
                        iMin = j;
                }
                swap(v[i], v[iMin]);
            }
    }
}








#endif
