#ifndef __SIMPLESR_RENDER_RENDERER_HPP__
#define __SIMPLESR_RENDER_RENDERER_HPP__

#include <ntl/NTL.hpp>

namespace ssr
{
    template <typename m_FrameBufferType>
    class Renderer : public ntl::Object
    {
    public:
        using FrameBufferType = m_FrameBufferType;

        using SelfType = Renderer;
        using ParentType = ntl::Object;

    public:
        Renderer() = default;
        ~Renderer() override = default;
    };
} // namespace ssr

#endif