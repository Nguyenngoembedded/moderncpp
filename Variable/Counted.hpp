#ifndef COUNTED_HPP
#define COUNTED_HPP

class Counted {
public:
    // Biến tĩnh đếm số lượng đối tượng được tạo ra
    static int count;

    // Tăng giá trị đếm mỗi khi tạo một đối tượng mới của lớp Counted
    Counted() { Counted::count++; }

    // Giảm giá trị đếm mỗi khi hủy một đối tượng của lớp Counted
    ~Counted() { Counted::count--; }

};

#endif
