#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//brute
int oneappear1(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int cnt=0;

        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]==arr[i])
            {
                cnt++;
            }
        }

        if(cnt==1)
        {
            return arr[i];
        }
    }

    return -1;
}
//better
int appear1better(vector<int>&arr){
  unordered_map<int,int> mp;

for(int x : arr)
    mp[x]++;

for(auto x : mp)
{
    if(x.second==1)
        return x.first;
}
};
int oneappear(vector<int>& arr)
{
    int ans = 0;

    for(int i = 0; i < arr.size(); i++)
    { 
        ans ^= arr[i];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << oneappear1(arr)<<endl;
    cout<<appear1better(arr)<<endl;
    cout<<oneappear(arr)<<endl;


    return 0;
}
  
// g++ numberappearonce.cpp -o numberappearonce.exe
// .\numberappearonce.exe




/*Interview Questions They May Ask

After you write this solution, the interviewer may ask:

1. Why does XOR work here?

Expected answer:

a ^ a = 0
a ^ 0 = a
XOR is commutative and associative, so duplicate numbers cancel each other.
2. What is the time complexity?

Answer:

O(n) because we traverse the array once.
3. What is the space complexity?

Answer:

O(1) because only one variable (ans) is used.
4. Why initialize ans to 0?

Answer:
Because 0 is the identity element for XOR.

0 ^ x = x
5. Will this work if every element appears three times except one?

Answer:
No.

Example:

2 2 2 5
2 ^ 2 ^ 2 = 2

The duplicates do not cancel out when they appear three times. A different approach (such as bit counting) is needed.

6. Will this work if there are two unique numbers?

Example:

1 2 3 2 1 4

Answer:
No. It returns:

3 ^ 4

not the individual numbers. There is a different XOR-based algorithm for finding two unique numbers.

7. Can you solve it without XOR?

Possible answers:

Using a hash map (unordered_map)
Using sorting

Then compare:

Method	Time	Space
XOR	O(n)	O(1)
Hash Map	O(n)	O(n)
Sorting	O(n log n)	O(1) or O(log n)
8. Why is XOR better than a hash map?

Answer:
It uses constant extra space while maintaining linear time.

9. What property of XOR allows this solution?

Answer:

Commutative:

a ^ b = b ^ a

Associative:

(a ^ b) ^ c = a ^ (b ^ c)

These properties let duplicate values cancel regardless of their positions.

10. What are the assumptions of this algorithm?

Answer:

Exactly one element appears once.
Every other element appears exactly twice.
The elements are integers.
A strong interview explanation

"I initialize ans to 0 because XOR with 0 leaves the number unchanged. Then I XOR every element in the array. Since XOR is associative and commutative, all duplicate elements cancel out (a ^ a = 0), leaving only the element that appears once. This solution runs in O(n) time and uses O(1) extra space."*/
