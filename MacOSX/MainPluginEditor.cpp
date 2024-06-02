#include "MainPluginEditor.h"

MainPluginEditor::MainPluginEditor (AudioToMidiProcessor& p)
    : AudioProcessorEditor (&p), processorRef (p)
{
    setSize (400, 300);
    addAndMakeVisible(midiDestinationBox);
    populateMidiDestinations();
}

MainPluginEditor::~MainPluginEditor() {}

void MainPluginEditor::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::black);
    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Trumpet to MIDI", getLocalBounds(), juce::Justification::centred, 1);
}

void MainPluginEditor::resized() 
{
    midiDestinationBox.setBounds (10, 10, getWidth() - 20, 30);
}

void MainPluginEditor::populateMidiDestinations()
{
    auto midiOutputs = juce::MidiOutput::getAvailableDevices();
    for (auto& output : midiOutputs)
        midiDestinationBox.addItem(output.name, output.identifier.hashCode());

    midiDestinationBox.onChange = [this]
    {
        auto selectedId = midiDestinationBox.getSelectedId();
        // Set the MIDI destination based on the selected ID
    };
}
