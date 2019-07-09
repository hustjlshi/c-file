#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

template <typename _Tp>
typename std::remove_reference<_Tp>::type && move(_Tp && _t){
    return static_cast<typename std::remove_reference<_Tp>::type&&>(_t);
}

template <typename _Tp>
struct remove_reference{
    typename _Tp type;
};

template<typename _Tp>
struct remove_reference<&_Tp>{
    typename _Tp type;
};

template <typename _Tp>
struct remove_reference<&& _Tp>{
    typename _Tp type;
};
#endif // MOVE_H_INCLUDED
