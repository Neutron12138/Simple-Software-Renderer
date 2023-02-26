#ifndef __SIMPLESR_BUFFER_BASICBUFFER_HPP__
#define __SIMPLESR_BUFFER_BASICBUFFER_HPP__

#include <ntl/NTL.hpp>

namespace ssr
{
    /// @brief 基础缓冲区对象
    /// @tparam m_ElementType 元素类型
    template <typename m_ElementType>
    class BasicBuffer : public ntl::Object
    {
    public:
        using ElementType = m_ElementType;
        using SelfType = BasicBuffer<ElementType>;
        using ParentType = ntl::Object;

    public:
        BasicBuffer() = default;
        explicit BasicBuffer(const SelfType &from) = default;
        ~BasicBuffer() override = default;

    public:
        SelfType &operator=(const SelfType &from) = default;
        virtual ElementType &operator[](ntl::UInt32 index) = 0;
        virtual const ElementType &operator[](ntl::UInt32 index) const = 0;

    public:
        /// @brief 重置缓冲区
        virtual void reset() = 0;
    };

} // namespace ssr

#endif