#include <queue>

template <typename T> 
class templatePriorityQueue {	
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();
	private:
		std::priority_queue<T> storage;
};
