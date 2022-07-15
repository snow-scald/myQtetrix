#ifndef TETRIXPIECE_H
#define TETRIXPIECE_H

//记录不同块的种类
enum TetrixShape { NoShape, ZShape, SShape, LineShape, TShape, SquareShape,
                   LShape, MirroredLShape };

class TetrixPiece
{
public:
    TetrixPiece() { setShape(NoShape); }

    void setRandomShape();//随机设置类型
    void setShape(TetrixShape shape);

    TetrixShape shape() const { return pieceShape; }

    int x(int index) const { return coords[index][0]; }
    int y(int index) const { return coords[index][1]; }
    int minX() const;
    int maxX() const;
    int minY() const;
    int maxY() const;
    //转动方法
    TetrixPiece rotatedLeft() const;
    TetrixPiece rotatedRight() const;

private:
    void setX(int index, int x) { coords[index][0] = x; }
    void setY(int index, int y) { coords[index][1] = y; }

    TetrixShape pieceShape;
    //块的四个小块的位置以数组形式依次记录，index为序号
    int coords[4][2];
};


#endif
