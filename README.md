# ZMK Config - Corne Keyboard

Custom ZMK firmware configuration for Corne (CRKBD) split keyboard with nice!nano v2 controllers.

## Flashing the Keyboard

### Initial Flash

1. Download the latest firmware from [GitHub Actions](../../actions)
   - Click on the latest successful workflow run
   - Download the `firmware.zip` artifact
   - Extract to find `corne_left-nice_nano_v2-zmk.uf2` and `corne_right-nice_nano_v2-zmk.uf2`

2. Flash each half:
   - Connect the keyboard half to your computer via USB
   - Double-tap the reset button on the nice!nano
   - A removable drive named `NICENANO` should appear
   - Drag and drop the corresponding `.uf2` file onto the drive
   - The drive will automatically disconnect when flashing is complete
   - Repeat for the other half

### Updating Firmware

After making changes to the keymap:
1. Commit and push your changes to GitHub
2. GitHub Actions will automatically build the new firmware
3. Download and flash as described above

## Connecting to Your Laptop

### First Time Setup

1. **Flash both halves** with the firmware (see above)

2. **Pair the halves together:**
   - Turn on both keyboard halves
   - They should automatically pair with each other
   - The central half (usually left) will be the one that connects to your computer

3. **Connect to your laptop via Bluetooth:**
   - Access the Bluetooth layer by holding the top-right key (`MO 3`)
   - Press the key for the desired profile slot (`BT_SEL 0-4` on the home row)
   - Open Bluetooth settings on your laptop
   - Look for "Corne" or "ZMK Keyboard" and pair

### Switching Between Devices

You can store up to 5 Bluetooth profiles. To switch:
- Hold top-right key to access Bluetooth layer (Layer 3)
- Press number keys 1-5 (home row) to select profile
- Use `BT_PRV`/`BT_NXT` to cycle through profiles

### Bluetooth Layer Commands

Access by holding the top-right key:
- **BT_SEL 0-4**: Select Bluetooth profile (1-5 on home row)
- **BT_CLR**: Clear current profile
- **BT_CLR_ALL**: Clear all profiles
- **OUT_USB**: Switch output to USB
- **OUT_BLE**: Switch output to Bluetooth

## Keymap Layers

- **Layer 0 (Default)**: QWERTY with home row mods
- **Layer 1 (Raise)**: Numbers and symbols
- **Layer 2 (Lower)**: Arrow keys and navigation
- **Layer 3 (Bluetooth)**: Bluetooth controls and profiles

## Customizing the Keymap

Edit `config/corne.keymap` to customize your layout. The current layout features:
- Home row mods (Ctrl, Alt, GUI modifiers)
- Layer-tap keys for easy layer access
- Dedicated Bluetooth control layer

Refer to the [ZMK documentation](https://zmk.dev/docs) for available keycodes and behaviors.

## Troubleshooting

**Keyboard not connecting:**
- Clear Bluetooth bonds: Access Layer 3 and press `BT_CLR_ALL`
- Remove the device from your laptop's Bluetooth settings
- Re-pair using the steps above

**Split halves not communicating:**
- Reset both halves by double-tapping reset button
- Flash both halves again with fresh firmware

**Battery issues:**
- Check battery connections
- Ensure power switch is ON
- Battery level indicators depend on your specific build configuration
