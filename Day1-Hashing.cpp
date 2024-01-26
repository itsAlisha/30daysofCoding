//Hashing, maps, unordered_maps

Code : Highest and Lowest Frequency elements
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    unordered_map <int,int> m;
    int count =0;
    int n=v.size();
    int minfreq=v.size(), maxfreq=0;
    int minElement=n, maxElement=n;
     vector<int>vec;
     for (int i = 0; i < v.size(); i++) {
       m[v[i]]++; //1->3, 2->1, 3->1, 4->1
     }
       for (auto it : m) {
         int element = it.first; //1,2
         int count = it.second;  //3,1
       if(count<minfreq){ //3<6  1<3
           minfreq=count; //3  //1
           minElement=element; //1 //2
       }
       else if (count==minfreq && element<minElement){
           minElement=element;
       }
       if(count>maxfreq){ //3>0  1>3 false
           maxElement=element; //1
           maxfreq=count; //3
       }
       else if(count==maxfreq && element<maxElement)
{
    maxElement=element;
}    }
    vec.push_back(maxElement);
    vec.push_back(minElement);
    
    return vec;
}
