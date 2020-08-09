
template<typename T>
class Vector{

	int cs;  //current size of array
	int ms;  //max size of the array
	T *arr;     //pointer to an array

public:
	Vector(){
		cs = 0;
		ms = 1;
		arr = new T[ms];
	}

	void push_back(T d){
		if(cs == ms){
			T *oldArr = arr;
			arr = new T[2*ms];
			ms = ms*2;
			for(int i=0; i<cs; i++)
				arr[i] = oldArr[i];

			//clear the old memory
			delete [] oldArr;
		}

		arr[cs] = d;    
		cs++;
	}

	void pop_back(){
		cs--;
	}

	T front() const{
		return arr[0];
	}

	T back() const{
		return arr[cs-1];
	}

	bool empty() const{
		return cs==0;
	}

	int size() const{
		return cs;
	}

	int capacity() const{      //made this function const because we r not modifying any data member.
		return ms;
	}

	T at(const int i){
		return arr[i];
	}

	//operator overloading
	T operator[](const int i){
		return arr[i];
	}

};