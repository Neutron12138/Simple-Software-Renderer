#ifndef __SIMPLESR_BUFFER_FIXEDBUFFER_CPP__
#define __SIMPLESR_BUFFER_FIXEDBUFFER_CPP__

#include "FixedBuffer.hpp"

namespace ssr
{
    template <typename m_ElementType, ntl::SizeT m_size>
    typename FixedBuffer<m_ElementType, m_size>::ElementType &
    FixedBuffer<m_ElementType, m_size>::operator[](
        ntl::SizeT index)
    {
        try
        {
            typename FixedBuffer<m_ElementType, m_size>::ElementType &
                result = m_elements.at(index);
        }
        catch (const std::out_of_range &exception)
        {
            throw ntl::OutOfRangeException(
                exception,
                NTL_STRING(
                    "template <typename m_ElementType, ntl::SizeT m_size> typename FixedBuffer<m_ElementType, m_size>::ElementType &FixedBuffer<m_ElementType, m_size>::operator[](ntl::SizeT index)"));
        }
    }

    template <typename m_ElementType, ntl::SizeT m_size>
    const typename FixedBuffer<m_ElementType, m_size>::ElementType &
    FixedBuffer<m_ElementType, m_size>::operator[](ntl::SizeT index) const
    {
        try
        {
            const typename FixedBuffer<m_ElementType, m_size>::ElementType &
                result = m_elements.at(index);
        }
        catch (const std::out_of_range &exception)
        {
            throw ntl::OutOfRangeException(
                exception,
                NTL_STRING(
                    "template <typename m_ElementType, ntl::SizeT m_size> const typename FixedBuffer<m_ElementType, m_size>::ElementType &FixedBuffer<m_ElementType, m_size>::operator[](ntl::SizeT index) const"));
        }
    }

    template <typename m_ElementType, ntl::SizeT m_size>
    const typename FixedBuffer<m_ElementType, m_size>::ElementHolder &
    FixedBuffer<m_ElementType, m_size>::get_elements() const
    {
        return m_elements;
    }

    template <typename m_ElementType, ntl::SizeT m_size>
    ntl::SizeT
    FixedBuffer<m_ElementType, m_size>::size()
    {
        return m_size;
    }

} // namespace ssr

#endif