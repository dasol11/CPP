#include <iostream>
#define m_sqe(x) ((x)*(x))
inline int sqe(int x) { return x * x; }
template <typename T>
inline T t_sqe(T x) { return x * x; }
int main(void)
{
	std::cout << m_sqe(10)<<std::endl;
	std::cout << m_sqe(3.15) << std::endl;

	std::cout << sqe(10) << std::endl;
	std::cout << sqe(3.15) << std::endl;

	std::cout << t_sqe(10) << std::endl;
	std::cout << t_sqe(3.15) << std::endl;


}