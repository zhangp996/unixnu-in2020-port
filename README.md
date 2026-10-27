# UniXNU IN2020 full port

OnePlus 8 Pro (IN2020 / instantnoodlep / SM8250) UniXNU port.

## Layout

- `board.toml`, `configs/`, `dts/`, `patches/`: device repository
- `vendor/UniXNU`: UniXNU base (submodule)
- `vendor/UniXNU-sm8250-common`: shared SM8250 SoC support (submodule)

## Build

```sh
git submodule update --init --recursive
./vendor/UniXNU/unixnu build kernel -D .
```
