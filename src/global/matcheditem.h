/*
 * Copyright (C) 2021 Uniontech Software Technology Co., Ltd.
 *
 * Author:     zhangyu<zhangyub@uniontech.com>
 *
 * Maintainer: zhangyu<zhangyub@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef MATCHEDITEM_H
#define MATCHEDITEM_H

#include <QtCore>

namespace GrandSearch {

//搜索结果
struct MatchedItem {
    QString item;   //匹配的内容
    QString name;   //界面显示的名称
    QString icon;   //界面显示的图标
    QString type;   //界面显示的类型
    QString searcher;   //出自的搜索项
};

typedef QList<MatchedItem> MatchedItems;
typedef QMap<QString, MatchedItems> MatchedItemMap; //组-匹配项列表
}

Q_DECLARE_METATYPE(GrandSearch::MatchedItem)

#endif // MATCHEDITEM_H
