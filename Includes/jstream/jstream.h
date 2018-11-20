//
// Created by moreal on 11/19/18.
//

#ifndef STREAM_JSTREAM_H
#define STREAM_JSTREAM_H

#include <vector>

template<typename _ElType, typename _Container = std::vector>
class jstream_base {
 private:
    _Container<_ElType> elements;

 public:
    // TODO: ADD Functions like map, reduce,,
};

#endif //STREAM_JSTREAM_H
