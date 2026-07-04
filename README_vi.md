[English](README.md) | [Tiếng Việt](README_vi.md)

# R3nzSkin - Phiên bản Tối ưu hóa Việt hóa

**R3nzSkin** là công cụ thay đổi trang phục (Skin Changer) trong game Liên Minh Huyền Thoại, được phát triển lại và tối ưu hóa dành riêng cho cộng đồng người chơi Việt Nam sau khi fork từ phiên bản của tác giả cũ.

---

## Tuyên bố miễn trừ trách nhiệm & Lưu ý bản quyền
* **Dự án dựa trên người cũ**: Dự án này được nâng cấp, cải tiến và sửa lỗi dựa trên mã nguồn của tác giả cũ (**[R3nzTheCodeGOD](https://github.com/R3nzTheCodeGOD/R3nzSkin)** và phiên bản cập nhật của **[hydy100](https://github.com/hydy100/R3nzSkin)**).
* **Hoàn toàn miễn phí**: Dự án này được cung cấp hoàn toàn miễn phí vì mục đích học tập, nghiên cứu và trao đổi kỹ thuật.
* **KHÔNG BUÔN BÁN**: Nghiêm cấm mọi hành vi mua bán, thương mại hóa dưới bất kỳ hình thức nào. Dự án được phát hành phi lợi nhuận cho cộng đồng sử dụng.
* **Miễn trừ trách nhiệm**: Người dùng tự chịu mọi trách nhiệm và rủi ro trực tiếp hoặc gián tiếp khi sử dụng công cụ này (bao gồm cả nguy cơ khóa tài khoản game). Tác giả không chịu bất kỳ trách nhiệm pháp lý nào liên quan.

---

## Tính năng & Phương pháp hoạt động mới
1. **Giao diện mới**: Giao diện mới được cập nhật hoàn toàn khác biệt so với các phiên bản trước đây của tác giả cũ.
2. **Cơ chế nạp SetWindowsHookEx**: Mẹo nhỏ: Cách thức tiêm gốc của RiotServers không thể sử dụng trực tiếp được nữa. Phương pháp tiêm hiện tại của tôi sử dụng `SetWindowsHookEx`. Chỉ cần một chút nỗ lực là việc tiêm có thể thành công. Không cần giải thích thêm, và vui lòng không hỏi tôi về vấn đề này.

---

## Hướng dẫn xây dựng dự án (Biên dịch)
Dự án sử dụng môi trường Visual Studio tiêu chuẩn để đóng gói đầu ra:

1. Mở giải pháp `R3nzSkin.sln` bằng Visual Studio 2022.
2. Chọn cấu hình biên dịch: `RiotGamesServers | x64`.
3. Bấm **Build Solution** để trình biên dịch đóng gói tự động các thành phần tệp vào thư mục `/Release/RiotGamesServers/`.

---

## Cách sử dụng
1. Mở thư mục đầu ra `/Release/RiotGamesServers/`.
2. Đảm bảo chạy file Loader chính đi kèm cùng các thư viện liên kết hệ thống bổ trợ trong cùng một thư mục.
3. Vào game, nhấn phím **`INSERT`** (hoặc **`INS`**) để bật/tắt menu chỉnh trang phục.

---

## Tối ưu hóa bổ sung
Nếu bộ xử lý (CPU) của bạn có hỗ trợ tập lệnh AVX / AVX2 / AVX-512, bạn có thể tự kích hoạt nó trong phần cài đặt thuộc tính dự án của Visual Studio. Việc này sẽ cho mã biên dịch tối ưu hóa cao hơn cho CPU của bạn. Hiện tại mặc định cấu hình dự án đang chọn tập lệnh SSE2.

---

## Đóng góp & Bản quyền
Dự án này là phiên bản được cải tiến và cập nhật từ dự án mã nguồn mở **R3nzTheCodeGOD/R3nzSkin**.

---

## Ủng hộ dự án
Nếu bạn thấy dự án hữu ích, hãy tặng cho tụi mình **1 Star** để ủng hộ tinh thần nhé!
