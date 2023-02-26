#ifndef __SIMPLESR_BUFFER_COLORBUFFER_HPP__
#define __SIMPLESR_BUFFER_COLORBUFFER_HPP__

#include <ntl/NTL.hpp>
#include "FixedBuffer.hpp"

namespace ssr
{
    template <ntl::SizeT m_width, ntl::SizeT m_height>
    class ColorBuffer : public FixedBuffer<ntl::PixelRGBA, m_width * m_height>
    {
    };

} // namespace ssr

#endif