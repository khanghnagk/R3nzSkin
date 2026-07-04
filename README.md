[English](README.md) | [Tiếng Việt](README_vi.md)

# R3nzSkin - Rebuilt & Optimized Fork

**R3nzSkin** is an improved and updated skin changer for League of Legends, rebuilt and optimized specifically for the Vietnamese community after forking the original source code.

---

## Disclaimer & Credits
* **Based on original work**: This project is built upon and improves the source code of the original creators (**[R3nzTheCodeGOD](https://github.com/R3nzTheCodeGOD/R3nzSkin)** and the updated fork by **[hydy100](https://github.com/hydy100/R3nzSkin)**).
* **Totally Free**: This project is provided for free for educational and technical learning purposes only.
* **NON-COMMERCIAL / NOT FOR SALE**: Any sale or commercial exploitation of this project is strictly prohibited. It is rebuilt and shared solely for the community.
* **Disclaimer**: Any direct or indirect consequences arising from the use of this project shall be borne solely by the user (including the risk of account bans). The author assumes no responsibility.

---

## Features & Implementation Mechanics
1. **New Interface**: Built with a new redesigned user interface that differs from previous versions of the old author.
2. **SetWindowsHookEx Loader Routine**: Quick tip: The original method of RiotServers cannot be injected. The injection method I currently use is `SetWindowsHookEx`. With a little effort, the injection should be possible. There is no need to say more, and don't ask me.

---

## Building
The workspace is configured to compile dependencies using standard Visual Studio workflows:

1. Open `R3nzSkin.sln` in Visual Studio 2022.
2. Select target configuration: `RiotGamesServers | x64`.
3. Build the Solution to package all files directly to `/Release/RiotGamesServers/`.

---

## How to Use
1. Open the output folder: `/Release/RiotGamesServers/`.
2. Run the main Loader executable and ensure the supporting library dependencies are present in the same folder.
3. In-game, press **`INSERT`** (or **`INS`**) to toggle the skin changer menu.

---

## Further Optimizations
If your CPU supports AVX / AVX2 / AVX-512 instruction set, you can enable it in project settings. This should result in more performant code, optimized for your CPU. Currently SSE2 instructions are selected in project settings.

---

## Credits
This program is an improved and updated version of the **R3nzTheCodeGOD/R3nzSkin** project.

---

## Support
If you find this project useful, please give us a **Star** to support our work!
