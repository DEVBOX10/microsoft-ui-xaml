﻿#pragma once
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace AnimatedVisuals {
// Name:        ProgressRingDeterminate
// Frame rate:  60 fps
// Frame count: 120
// Duration:    2000.0 mS
// ________________________________________________
// | Theme property | Type  |    Default value    |
// |________________|_______|_____________________|
// | Background     | Color | #FFD3D3D3 LightGray |
// | Foreground     | Color |      #FF0078D7      |
// ------------------------------------------------
class ProgressRingDeterminate : public winrt::implements<ProgressRingDeterminate, winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisualSource>
{
    winrt::Windows::UI::Composition::CompositionPropertySet _themeProperties{nullptr};
    winrt::Windows::UI::Color _themeBackground{0xFF, 0xD3, 0xD3, 0xD3};
    winrt::Windows::UI::Color _themeForeground{0xFF, 0x00, 0x78, 0xD7};

    winrt::float4 ColorAsVector4(winrt::Windows::UI::Color color);

    winrt::Windows::UI::Composition::CompositionPropertySet EnsureThemeProperties(winrt::Windows::UI::Composition::Compositor compositor);

    // Animation duration: 2.000 seconds.
    static constexpr int64_t c_durationTicks{20000000L};

    // Theme property: Background.
    static inline const winrt::Windows::UI::Color c_themeBackground{0xFF, 0xD3, 0xD3, 0xD3};

    // Theme property: Foreground.
    static inline const winrt::Windows::UI::Color c_themeForeground{0xFF, 0x00, 0x78, 0xD7};

    winrt::Windows::UI::Color Background();
    void Background(winrt::Windows::UI::Color value);
    winrt::Windows::UI::Color Foreground();
    void Foreground(winrt::Windows::UI::Color value);

public:
    virtual winrt::Windows::UI::Composition::CompositionPropertySet GetThemeProperties(winrt::Windows::UI::Composition::Compositor compositor);

    virtual winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
        const winrt::Windows::UI::Composition::Compositor& compositor, winrt::IInspectable& diagnostics);
};
} // namespace AnimatedVisuals
