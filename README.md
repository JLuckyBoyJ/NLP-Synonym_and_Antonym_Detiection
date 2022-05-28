# NLP-Synonym_and_Antonym_Detiection
Sử dụng pretrained word2vec để xác định liệu 1 cặp từ cho trước là đồng nghĩa hay trái nghĩa 
## Link github của bài toán.
> https://github.com/NLP-Projects/Word-Similarity
## Tập dữ liệu sau cặp từ đồng nghĩa và trái nghĩa khi đã sinh thêm 
> https://drive.google.com/file/d/1eVhEsFxrLnxuKP4RZf0n78tF5HUrI4HQ/view?usp=sharing
> https://drive.google.com/file/d/1dmtSmSEuUFwM2nWlwFZ6DVlwFZMMoWEO/view?usp=sharing
## Tập dữ liệu được cho qua fasttext để embedding (1 tập 300 dimensions, 1 tập 50 dimensions)
> https://drive.google.com/file/d/1Ket-kbizQ2l6jRCadmc8iOEpbyzDLpNo/view?usp=sharing
> https://drive.google.com/file/d/1X6IwTPahV5PzZnZ5LbBlsyWCYzLePmMP/view?usp=sharing

## Mô hình 
![image](https://user-images.githubusercontent.com/63398716/170826738-ecb788c1-17b4-4c55-8cd8-44fb6b02adcb.png)

## Kết quả trên tập dữ liệu 300 chiều trước khi dùng dữ liệu gốc và dữ liệu sinh thêm
|Dữ liệu| F1   |      Precision      |  Recall |
|---|----------|:-------------:|--------:|
|Gốc|68.81%|80.69%|71.21%|
|Gốc + Sinh thêm| 86.22% |  87.85% | 86.36% |
> **_NOTE:_**  Đây là kết quả sau khi đã loại bỏ hoàn toàn các dữ liệu trong tập train mà có trong tập test
## Link báo cáo chi tiết
........


