#include<iostream>
#include<stdexcept>
using namespace std;
template<typename T>
class Stack{
	public:
		int pop() 
		{
			if(num_of_ele==0)
				{
					throw std::runtime_error("error");
				}
			else
				num_of_ele--;
			return data[num_of_ele];
		}
		void push(T i)
		{
			data[num_of_ele]=i;
			num_of_ele++;
	      //std::cout<<"current num_of_ele:"<<num_of_ele<<std::endl;
		}
		void print()
		{
			std::cout<<"total number of elements:"<<num_of_ele<<std::endl;
			for(unsigned i=0;i<num_of_ele;i++)
				std::cout<<data[i]<<std::endl;
		}
		int size() const
		{
			return num_of_ele;
		}
	private:
		T data[10];
		int num_of_ele=0;
};
int main()
{
	Stack<int> one;
	one.push(100);
	one.push(200);
	std::cout<<"The length of the stack is:"<<one.size()<<std::endl;
	one.pop();
	one.pop();
	std::cout<<"The length of the stack is:"<<one.size()<<std::endl;
	try
	{
		one.pop();
	}
	catch(...)
	{
		std::cout<<"I catch you!"<<std::endl;
	}
	return 0;
}
