#ifndef __SIMPLESR_BUFFER_FIXEDBUFFER_HPP__
#define __SIMPLESR_BUFFER_FIXEDBUFFER_HPP__

#include <array>
#include "BasicBuffer.hpp"

namespace ssr
{
    /// @brief 固定长度的缓冲区
    /// @tparam m_ElementType 元素类型
    /// @tparam m_size 缓冲区元素数量
    template <typename m_ElementType, ntl::SizeT m_size>
    class FixedBuffer : public Buffer<m_ElementType>
    {
    public:
        using ElementType = m_ElementType;
        using ElementHolder = std::array<ElementType, m_size>;

        using SelfType = FixedBuffer<ElementType, m_size>;
        using ParentType = Buffer<ElementType>;

    protected:
        /// @brief 元素容器
        ElementHolder m_elements;

    public:
        FixedBuffer() = default;
        explicit FixedBuffer(const SelfType &from) = default;
        virtual ~FixedBuffer() override = default;

    public:
        SelfType &operator=(const SelfType &from) = default;
        virtual ElementType &operator[](ntl::SizeT index) override;
        virtual const ElementType &operator[](ntl::SizeT index) const override;

    public:
        /// @brief 获取所有元素
        /// @return 元素容器
        const ElementHolder &get_elements() const;

    public:
        /// @brief 获取缓冲区元素数量
        /// @return 缓冲区元素数量
        static ntl::SizeT size();
    };

} // namespace ssr

#endif