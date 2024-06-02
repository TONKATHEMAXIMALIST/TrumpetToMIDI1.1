#include "AudioToMidiProcessor.h"
#include "MainPluginEditor.h"

AudioToMidiProcessor::AudioToMidiProcessor()
    : AudioProcessor (BusesProperties().withInput ("Input", juce::AudioChannelSet::mono(), true))
{
}

AudioToMidiProcessor::~AudioToMidiProcessor() {}

void AudioToMidiProcessor::prepareToPlay (double sampleRate, int samplesPerBlock) {}

void AudioToMidiProcessor::releaseResources() {}

void AudioToMidiProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    // Implement your audio processing and MIDI conversion logic here.
}

juce::AudioProcessorEditor* AudioToMidiProcessor::createEditor()
{
    return new MainPluginEditor (*this);
}

bool AudioToMidiProcessor::hasEditor() const
{
    return true;
}

const juce::String AudioToMidiProcessor::getName() const
{
    return JucePlugin_Name;
}

bool AudioToMidiProcessor::acceptsMidi() const { return true; }
bool AudioToMidiProcessor::producesMidi() const { return true; }
bool AudioToMidiProcessor::isMidiEffect() const { return false; }
double AudioToMidiProcessor::getTailLengthSeconds() const { return 0.0; }

int AudioToMidiProcessor::getNumPrograms() { return 1; }
int AudioToMidiProcessor::getCurrentProgram() { return 0; }
void AudioToMidiProcessor::setCurrentProgram (int index) {}
const juce::String AudioToMidiProcessor::getProgramName (int index) { return {}; }
void AudioToMidiProcessor::changeProgramName (int index, const juce::String& newName) {}

void AudioToMidiProcessor::getStateInformation (juce::MemoryBlock& destData) {}
void AudioToMidiProcessor::setStateInformation (const void* data, int sizeInBytes) {}
