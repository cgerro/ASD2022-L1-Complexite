#ifndef ASD2022_L1_COMPLEXITE_SORTS_H
#define ASD2022_L1_COMPLEXITE_SORTS_H



// BUBBLE SORT

// INSERTION SORT



// SELECTION SORT
    void selectionSort(vector<int>& v) {
        if (v.size() > 0) {
            size_t iMin;
                         for (size_t i = 0; i < v.size() - 1; ++i) {
                             iMin = i;
                             for (size_t j = i + 1; j < v.size(); ++j) {
                                 if (v[j] < v[iMin])
                                     iMin = j;
                             }
                             swap(v[i], v[iMin]); // permutation
                         }
        }
    }
#endif
