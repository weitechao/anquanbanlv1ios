//
//  HistoryAnntaionView.h
//  酷宝贝
//
//  Created by yangkang on 16/6/22.
//  Copyright © 2016年 YiWen. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface HistoryAnntaionView : MKAnnotationView
-(void)createUIWithName:(NSString *)name andType:(NSString *)type andTime:(NSString *)time;
@end
