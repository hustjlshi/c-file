template <typename T>
class Smart_ptr{
public:
    Smart_ptr(T *p = nullptr) : pointness(p), Count(new size_t(1)){}
    Smart_ptr(const Smart_ptr &rhs) : pointness(rhs.pointness), Count(rhs.Count){++ *Count;}
    ~Smart_ptr(decr_count();)
    Smart_ptr& operator = (const Smart_ptr &rhs){
        ++*Count;
        pointness = rhs.pointness;
        Count = rhs.Count;
        return *this;
    }

};
