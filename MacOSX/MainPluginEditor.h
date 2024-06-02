#pragma once
#include <JuceHeader.h>
#include "AudioToMidiProcessor.h"

class MainPluginEditor : public juce::AudioProcessorEditor
{
public:
    MainPluginEditor (AudioToMidiProcessor&);
    ~MainPluginEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    AudioToMidiProcessor& processorRef;
    juce::ComboBox midiDestinationBox;

    void populateMidiDestinations();
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainPluginEditor)
};
