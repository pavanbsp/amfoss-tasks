try:
    from PIL import Image
except ImportError:
    import Image
import pytesseract

result = pytesseract.image_to_string(Image.open("captchaimage.png"))

print(int(result[0])+int(result[2]))
