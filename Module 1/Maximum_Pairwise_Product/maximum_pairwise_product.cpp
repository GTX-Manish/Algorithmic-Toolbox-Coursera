#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

long long MaxPairWiseProductFast(const vector<long long>& numbers){
    long long result = 0;
    long long max1 = -1;
    long long max2 = -1;
    int n = numbers.size();

    for(int i = 0; i < n; i++){
        if((max1 == -1) || (numbers[i] > numbers[max1])){
            max1 = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(i != max1 && ((max2 == -1) || (numbers[i] > numbers[max2]))){
            max2 = i;
        }
    }

    result = numbers[max1] * numbers[max2];
    return result;
}

int main(){

    /* while(true){
        int n = rand() % 10 + 2;
        cout<<n<<endl;
        vector<int> a;
        for(int i=0; i<n; i++){
            a.push_back(rand() % 100000);
        }
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout<<"\n";
        long long res1 = MaxPairWiseProduct(a);
        long long res2 = MaxPairWiseProductFast(a);

        if(res1!=res2){
            cout<<"Wrong Answer "<<res1<<" "<<res2;
            break;
        }
        else{
            cout << "OK";
        }
    }*/

    int n;
    cin>>n;
    vector<long long> numbers(n);
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    long long res = MaxPairWiseProductFast(numbers);
    cout<<endl<<res;
    return 0;
}