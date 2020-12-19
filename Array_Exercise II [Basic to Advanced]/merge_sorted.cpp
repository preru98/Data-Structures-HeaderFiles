/*
________________________________________________________________________________

Question From -> Binary Search Platform

Merging Two Sorted Lists
Given two sorted lists of integers, merge them into one large sorted list.

Example 1
Input
lst0 = [5, 10, 15]
lst1 = [3, 8, 9]
Output
[3, 5, 8, 9, 10, 15]

________________________________________________________________________________________
*/


vector<int> solve(vector<int>& lst0, vector<int>& lst1) {
    vector<int> ret;
    int n =lst0.size();
    int s =lst1.size();
    int i = 0;
    int j = 0;
    while(i<n && j<s){
        if(lst0[i]<lst1[j]){
            ret.push_back(lst0[i]);
            i++;
        }
        else{
            ret.push_back(lst1[j]);
            j++;
        }
            
    }
    while(i<n){
            ret.push_back(lst0[i]);
            i++;
    }
    while(j<s){
            ret.push_back(lst1[j]);
            j++;
    }
    return ret;
    
}

