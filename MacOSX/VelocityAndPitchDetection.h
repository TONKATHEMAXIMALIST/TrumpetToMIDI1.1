#pragma once
#include <JuceHeader.h>

class VelocityAndPitchDetection
{
public:
    VelocityAndPitchDetection();
    ~VelocityAndPitchDetection();

    void detectPitchAndVelocity(const juce::AudioBuffer<float>& buffer);

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VelocityAndPitchDetection)
};
